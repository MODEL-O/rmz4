; undefined FUN_0803492c(void)
; entry 0x803492c  size 38 bytes

0803492C: 10b5         push {r4,lr}
0803492E: 041c         add r4,r0,#0x0
08034930: 0849         ldr r1,[0x08034954]
08034932: e8f7e5fa     bl 0x0801cf00
08034936: 201c         add r0,r4,#0x0
08034938: 0021         mov r1,#0x0
0803493A: 05f02ffd     bl 0x0803a39c
0803493E: 0648         ldr r0,[0x08034958]
08034940: 2118         add r1,r4,r0
08034942: 0120         mov r0,#0x1
08034944: 0870         strb r0,[r1,#0x0]
08034946: 201c         add r0,r4,#0x0
08034948: 00f008f8     bl 0x0803495c
0803494C: 10bc         pop {r4}
0803494E: 01bc         pop {r0}
08034950: 0047         bx r0
