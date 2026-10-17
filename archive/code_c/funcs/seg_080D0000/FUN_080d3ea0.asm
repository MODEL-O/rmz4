; undefined FUN_080d3ea0(void)
; entry 0x80d3ea0  size 28 bytes

080D3EA0: 00b5         push {lr}
080D3EA2: 816a         ldr r1,[r0,#0x28]
080D3EA4: a122         mov r2,#0xa1
080D3EA6: 5200         lsl r2,r2,#0x1
080D3EA8: 8b18         add r3,r1,r2
080D3EAA: 1a78         ldrb r2,[r3,#0x0]
080D3EAC: 0521         mov r1,#0x5
080D3EAE: 4942         rsb r1,r1
080D3EB0: 1140         and r1,r2
080D3EB2: 1970         strb r1,[r3,#0x0]
080D3EB4: fcf7bcfe     bl 0x080d0c30
080D3EB8: 01bc         pop {r0}
080D3EBA: 0047         bx r0
