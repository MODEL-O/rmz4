; undefined FUN_08035bbc(void)
; entry 0x8035bbc  size 44 bytes

08035BBC: 10b5         push {r4,lr}
08035BBE: 041c         add r4,r0,#0x0
08035BC0: 04f0ecfa     bl 0x0803a19c
08035BC4: 011c         add r1,r0,#0x0
08035BC6: 0029         cmp r1,#0x0
08035BC8: 04d1         bne 0x08035bd4
08035BCA: 8022         mov r2,#0x80
08035BCC: 5200         lsl r2,r2,#0x1
08035BCE: a018         add r0,r4,r2
08035BD0: 0170         strb r1,[r0,#0x0]
08035BD2: 06e0         b 0x08035be2
08035BD4: 0448         ldr r0,[0x08035be8]
08035BD6: 2118         add r1,r4,r0
08035BD8: 0120         mov r0,#0x1
08035BDA: 0870         strb r0,[r1,#0x0]
08035BDC: 201c         add r0,r4,#0x0
08035BDE: 00f005f8     bl 0x08035bec
08035BE2: 10bc         pop {r4}
08035BE4: 01bc         pop {r0}
08035BE6: 0047         bx r0
