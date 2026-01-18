# Hubs Single — a single-server version of Hubs


## Pre-Setup

### MacOS

1. In **System Settings**, under **General** > **AirDrop & Handoff**, disable **AirPlay Receiver**. (It uses port 5000, which is needed for nearspark.)

## Setup

1. Install a container runtime or Docker Desktop.
2. In your terminal, clone the [Hubs Single repository](https://github.com/Hubs-Foundation/hubs-single) from GitHub.
3. Change directory to the cloned repository.
4. Copy `.env.example` to `.env` and edit the values.
5. Run `docker compose -f docker-compose-certificate.yaml up`
6. After the log shows `Successfully received certificate.`, type control-C to stop the servers

[//]: # (7. run `docker compose -f docker-compose-init.yaml down`)


## Running
1. In your terminal, navigate to the repository directory.
2. Run `docker compose up` to start the servers.
