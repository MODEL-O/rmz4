; undefined FUN_080b1910(void)
; entry 0x80b1910  size 66 bytes

080B1910: 10b5         push {r4,lr}
080B1912: 041c         add r4,r0,#0x0
080B1914: a07b         ldrb r0,[r4,#0xe]
080B1916: 0028         cmp r0,#0x0
080B1918: 0ed1         bne 0x080b1938
080B191A: 5a20         mov r0,#0x5a
080B191C: a074         strb r0,[r4,#0x12]
080B191E: bb21         mov r1,#0xbb
080B1920: 0902         lsl r1,r1,#0x8
080B1922: 201c         add r0,r4,#0x0
080B1924: 6bf7ecfa     bl 0x0801cf00
080B1928: 201c         add r0,r4,#0x0
080B192A: 7430         add r0,#0x74
080B192C: 0949         ldr r1,[0x080b1954]
080B192E: 53f729ff     bl 0x08005784
080B1932: a07b         ldrb r0,[r4,#0xe]
080B1934: 0130         add r0,#0x1
080B1936: a073         strb r0,[r4,#0xe]
080B1938: 201c         add r0,r4,#0x0
080B193A: 00f0a7f8     bl 0x080b1a8c
080B193E: 0006         lsl r0,r0,#0x18
080B1940: 0028         cmp r0,#0x0
080B1942: 03d0         beq 0x080b194c
080B1944: 0021         mov r1,#0x0
080B1946: 0120         mov r0,#0x1
080B1948: 6073         strb r0,[r4,#0xd]
080B194A: a173         strb r1,[r4,#0xe]
080B194C: 10bc         pop {r4}
080B194E: 01bc         pop {r0}
080B1950: 0047         bx r0
