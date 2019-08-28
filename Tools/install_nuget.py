import subprocess, argparse

parser = argparse.ArgumentParser(description='A script for running NuGet.')

parser.add_argument('config', help='Path to NuGet config file.', type=str)
parser.add_argument('slndir', help='Path to VS Solution Dir.', type=str)
args = parser.parse_args()

print("Installing NuGet packages...")

subprocess.run(r"./nuget.exe install -ConfigFile " + args.config + r" -SolutionDirectory " + args.slndir)