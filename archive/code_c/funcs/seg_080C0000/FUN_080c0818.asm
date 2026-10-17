; undefined FUN_080c0818(void)
; entry 0x80c0818  size 36 bytes

080C0818: 10b5         push {r4,lr}
080C081A: 041c         add r4,r0,#0x0
080C081C: e07b         ldrb r0,[r4,#0xf]
080C081E: 0028         cmp r0,#0x0
080C0820: 06d1         bne 0x080c0830
080C0822: 0649         ldr r1,[0x080c083c]
080C0824: 201c         add r0,r4,#0x0
080C0826: 5cf76bfb     bl 0x0801cf00
080C082A: e07b         ldrb r0,[r4,#0xf]
080C082C: 0130         add r0,#0x1
080C082E: e073         strb r0,[r4,#0xf]
080C0830: 201c         add r0,r4,#0x0
080C0832: 5cf7ddfb     bl 0x0801cff0
080C0836: 10bc         pop {r4}
080C0838: 01bc         pop {r0}
080C083A: 0047         bx r0
