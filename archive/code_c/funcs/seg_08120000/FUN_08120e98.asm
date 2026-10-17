; undefined FUN_08120e98(void)
; entry 0x8120e98  size 32 bytes

08120E98: 10b5         push {r4,lr}
08120E9A: 041c         add r4,r0,#0x0
08120E9C: 0649         ldr r1,[0x08120eb8]
08120E9E: 6078         ldrb r0,[r4,#0x1]
08120EA0: 8000         lsl r0,r0,#0x2
08120EA2: 4018         add r0,r0,r1
08120EA4: 0168         ldr r1,[r0,#0x0]
08120EA6: 201c         add r0,r4,#0x0
08120EA8: 08f06af8     bl 0x08128f80
08120EAC: 201c         add r0,r4,#0x0
08120EAE: 01f01dfc     bl 0x081226ec
08120EB2: 10bc         pop {r4}
08120EB4: 01bc         pop {r0}
08120EB6: 0047         bx r0
