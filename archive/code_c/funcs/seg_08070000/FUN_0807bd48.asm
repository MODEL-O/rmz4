; undefined FUN_0807bd48(void)
; entry 0x807bd48  size 30 bytes

0807BD48: 10b5         push {r4,lr}
0807BD4A: 041c         add r4,r0,#0x0
0807BD4C: 02f030fe     bl 0x0807e9b0
0807BD50: 0549         ldr r1,[0x0807bd68]
0807BD52: 607b         ldrb r0,[r4,#0xd]
0807BD54: 8000         lsl r0,r0,#0x2
0807BD56: 4018         add r0,r0,r1
0807BD58: 0168         ldr r1,[r0,#0x0]
0807BD5A: 201c         add r0,r4,#0x0
0807BD5C: adf010f9     bl 0x08128f80
0807BD60: 10bc         pop {r4}
0807BD62: 01bc         pop {r0}
0807BD64: 0047         bx r0
