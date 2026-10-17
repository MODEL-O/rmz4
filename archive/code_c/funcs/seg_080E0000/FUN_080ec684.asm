; undefined FUN_080ec684(void)
; entry 0x80ec684  size 78 bytes

080EC684: 70b5         push {r4,r5,r6,lr}
080EC686: 041c         add r4,r0,#0x0
080EC688: e07b         ldrb r0,[r4,#0xf]
080EC68A: 0028         cmp r0,#0x0
080EC68C: 07d1         bne 0x080ec69e
080EC68E: b021         mov r1,#0xb0
080EC690: 8900         lsl r1,r1,#0x2
080EC692: 0620         mov r0,#0x6
080EC694: 15f702ff     bl 0x0800249c
080EC698: e07b         ldrb r0,[r4,#0xf]
080EC69A: 0130         add r0,#0x1
080EC69C: e073         strb r0,[r4,#0xf]
080EC69E: 0620         mov r0,#0x6
080EC6A0: 15f79aff     bl 0x080025d8
080EC6A4: 0006         lsl r0,r0,#0x18
080EC6A6: 060e         lsr r6,r0,#0x18
080EC6A8: 201c         add r0,r4,#0x0
080EC6AA: 30f7a1fc     bl 0x0801cff0
080EC6AE: 201c         add r0,r4,#0x0
080EC6B0: b430         add r0,#0xb4
080EC6B2: 0578         ldrb r5,[r0,#0x0]
080EC6B4: 002d         cmp r5,#0x0
080EC6B6: 09d1         bne 0x080ec6cc
080EC6B8: f01e         sub r0,r6,#0x3
080EC6BA: 0128         cmp r0,#0x1
080EC6BC: 06d8         bhi 0x080ec6cc
080EC6BE: 0620         mov r0,#0x6
080EC6C0: 15f7b0ff     bl 0x08002624
080EC6C4: 0220         mov r0,#0x2
080EC6C6: 6073         strb r0,[r4,#0xd]
080EC6C8: a573         strb r5,[r4,#0xe]
080EC6CA: e573         strb r5,[r4,#0xf]
080EC6CC: 70bc         pop {r4,r5,r6}
080EC6CE: 01bc         pop {r0}
080EC6D0: 0047         bx r0
