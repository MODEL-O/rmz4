; undefined FUN_080378b8(void)
; entry 0x80378b8  size 50 bytes

080378B8: 10b5         push {r4,lr}
080378BA: 041c         add r4,r0,#0x0
080378BC: b021         mov r1,#0xb0
080378BE: 8901         lsl r1,r1,#0x6
080378C0: e5f71efb     bl 0x0801cf00
080378C4: 0948         ldr r0,[0x080378ec]
080378C6: 2118         add r1,r4,r0
080378C8: 0020         mov r0,#0x0
080378CA: 0870         strb r0,[r1,#0x0]
080378CC: a920         mov r0,#0xa9
080378CE: 4000         lsl r0,r0,#0x1
080378D0: 2118         add r1,r4,r0
080378D2: 0420         mov r0,#0x4
080378D4: 0870         strb r0,[r1,#0x0]
080378D6: fd30         add r0,#0xfd
080378D8: 2118         add r1,r4,r0
080378DA: 0120         mov r0,#0x1
080378DC: 0870         strb r0,[r1,#0x0]
080378DE: 201c         add r0,r4,#0x0
080378E0: 00f006f8     bl 0x080378f0
080378E4: 10bc         pop {r4}
080378E6: 01bc         pop {r0}
080378E8: 0047         bx r0
