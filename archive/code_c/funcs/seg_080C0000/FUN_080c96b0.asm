; undefined FUN_080c96b0(void)
; entry 0x80c96b0  size 38 bytes

080C96B0: 10b5         push {r4,lr}
080C96B2: 041c         add r4,r0,#0x0
080C96B4: 211c         add r1,r4,#0x0
080C96B6: 5431         add r1,#0x54
080C96B8: 0320         mov r0,#0x3
080C96BA: 07f0e5fa     bl 0x080d0c88
080C96BE: 0649         ldr r1,[0x080c96d8]
080C96C0: 607a         ldrb r0,[r4,#0x9]
080C96C2: 8000         lsl r0,r0,#0x2
080C96C4: 4018         add r0,r0,r1
080C96C6: 0421         mov r1,#0x4
080C96C8: e160         str r1,[r4,#0xc]
080C96CA: 0068         ldr r0,[r0,#0x0]
080C96CC: 0069         ldr r0,[r0,#0x10]
080C96CE: 6061         str r0,[r4,#0x14]
080C96D0: 10bc         pop {r4}
080C96D2: 01bc         pop {r0}
080C96D4: 0047         bx r0
