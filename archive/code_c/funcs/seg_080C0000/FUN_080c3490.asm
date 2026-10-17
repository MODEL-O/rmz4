; undefined FUN_080c3490(void)
; entry 0x80c3490  size 72 bytes

080C3490: 70b5         push {r4,r5,r6,lr}
080C3492: 051c         add r5,r0,#0x0
080C3494: 0906         lsl r1,r1,#0x18
080C3496: 0e0e         lsr r6,r1,#0x18
080C3498: 0f48         ldr r0,[0x080c34d8]
080C349A: 0068         ldr r0,[r0,#0x0]
080C349C: 42f730f8     bl 0x08005500
080C34A0: 041c         add r4,r0,#0x0
080C34A2: 002c         cmp r4,#0x0
080C34A4: 15d0         beq 0x080c34d2
080C34A6: 211c         add r1,r4,#0x0
080C34A8: 2531         add r1,#0x25
080C34AA: 0023         mov r3,#0x0
080C34AC: 0820         mov r0,#0x8
080C34AE: 0870         strb r0,[r1,#0x0]
080C34B0: 0a49         ldr r1,[0x080c34dc]
080C34B2: 1220         mov r0,#0x12
080C34B4: 6072         strb r0,[r4,#0x9]
080C34B6: 886c         ldr r0,[r1,#0x48]
080C34B8: 0068         ldr r0,[r0,#0x0]
080C34BA: 6061         str r0,[r4,#0x14]
080C34BC: 0022         mov r2,#0x0
080C34BE: 2384         strh r3,[r4,#0x20]
080C34C0: 201c         add r0,r4,#0x0
080C34C2: 2230         add r0,#0x22
080C34C4: 0270         strb r2,[r0,#0x0]
080C34C6: 2868         ldr r0,[r5,#0x0]
080C34C8: 6968         ldr r1,[r5,#0x4]
080C34CA: 6065         str r0,[r4,#0x54]
080C34CC: a165         str r1,[r4,#0x58]
080C34CE: 2274         strb r2,[r4,#0x10]
080C34D0: 6674         strb r6,[r4,#0x11]
080C34D2: 70bc         pop {r4,r5,r6}
080C34D4: 01bc         pop {r0}
080C34D6: 0047         bx r0
