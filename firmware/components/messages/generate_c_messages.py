import subprocess

if __name__ == "__main__":
    subprocess.run(["python3", "./nanopb/generator/nanopb_generator.py", 
                    "--proto-path=./protobuf_messages/", "fw-to-backend.proto", "backend-to-fw.proto"
                    ], shell=False)