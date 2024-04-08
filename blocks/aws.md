##### VPC:
* VPC is Amazon Web Services (AWS) solution for providing isolated network environments for AWS resources. IP addresses in a VPC are used for communication between resources within the VPC, as well as for communication between the VPC and the Internet.
* Users can connect to the Internet by adding an Internet Gateway to their VPC, which assigns the VPC a public IPv4 Address.
* VPC Peering: Users are also able to route traffic from one VPC to another VPC *using private IP addresses* and can communicate as if they were on the same network
* Peering can be achieved by connecting a route between two VPCs on the same account or two VPCs on different accounts in the same region.
*  It's important to note that VPC peering connections are non-transitive, meaning if VPC A is peered with VPC B and VPC B is peered with VPC C, VPC A cannot communicate directly with VPC C through the peering connection with VPC B.
*  ***Imp condition for VPC Peering: -> CIDR Blocks: Each VPC must have a unique range of IP addresses defined by a Classless Inter-Domain Routing (CIDR) block. The CIDR blocks of the peered VPCs must not overlap.***
*  *Security Groups and Network Access Control Lists (ACLs):* Security Groups act as a virtual firewall for your instances to control inbound and outbound traffic. Network ACLs act as a firewall at the subnet level to control traffic in and out of one or more subnets. When setting up VPC peering, you need to ensure that appropriate rules are configured in the security groups and network ACLs to allow traffic between the peered VPCs.
*  *Route Tables:* Each VPC has its own route table that defines how traffic should be directed. When setting up VPC peering, you need to update the route tables of each VPC to include routes to the CIDR block of the peered VPC.
*  Good read: https://medium.com/@madeehak/aws-vpc-in-brief-928c8e7f4481

#### Internet Gateway:
*  Is a logical connection between an Amazon VPC and the Internet
*  Connectivity to the Internet: An Internet Gateway enables instances within a VPC to establish outbound connections to the internet and receive incoming responses from the internet. This allows resources in the VPC to access services, websites, APIs, and other internet-based resources.
*  It is not a physical device. Only one can be associated with each VPC
*  If a VPC does not have an Internet Gateway, then the resources in the VPC cannot be accessed from the Internet (unless the traffic flows via a corporate network and VPN/Direct Connect).
*  A subnet is deemed to be a Public Subnet if it has a Route Table that directs traffic to the Internet Gateway.
*  

#### NAT instance/gateway:
* Outbound Internet Access: NAT Gateway allows instances in private subnets to access the internet for software updates, downloading patches, accessing public repositories, etc. It enables outbound traffic initiated by instances in the private subnet to reach the internet, while preventing unsolicited inbound traffic from reaching those instances.
* Instances in a private subnet that want to access the Internet can have their Internet-bound traffic forwarded to the NAT Instance via a Route Table configuration. The NAT Instance will then make the request to the Internet (since it is in a Public Subnet) and the response will be forwarded back to the private instance.
* 

#### VPN:
