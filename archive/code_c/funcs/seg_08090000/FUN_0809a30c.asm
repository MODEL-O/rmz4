; undefined FUN_0809a30c(void)
; entry 0x809a30c  size 34 bytes

0809A30C: 10b5         push {r4,lr}
0809A30E: 041c         add r4,r0,#0x0
0809A310: 82f7c4fc     bl 0x0801cc9c
0809A314: a17a         ldrb r1,[r4,#0xa]
0809A316: 0120         mov r0,#0x1
0809A318: 0843         orr r0,r1
0809A31A: 0221         mov r1,#0x2
0809A31C: 0843         orr r0,r1
0809A31E: a072         strb r0,[r4,#0xa]
0809A320: 0349         ldr r1,[0x0809a330]
0809A322: 201c         add r0,r4,#0x0
0809A324: 82f7ecfd     bl 0x0801cf00
0809A328: 10bc         pop {r4}
0809A32A: 01bc         pop {r0}
0809A32C: 0047         bx r0
