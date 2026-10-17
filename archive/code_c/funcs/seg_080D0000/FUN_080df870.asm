; undefined FUN_080df870(void)
; entry 0x80df870  size 44 bytes

080DF870: 10b5         push {r4,lr}
080DF872: 041c         add r4,r0,#0x0
080DF874: 607b         ldrb r0,[r4,#0xd]
080DF876: 0028         cmp r0,#0x0
080DF878: 0ad1         bne 0x080df890
080DF87A: 0849         ldr r1,[0x080df89c]
080DF87C: 201c         add r0,r4,#0x0
080DF87E: 3df73ffb     bl 0x0801cf00
080DF882: 617c         ldrb r1,[r4,#0x11]
080DF884: 201c         add r0,r4,#0x0
080DF886: fff749ff     bl 0x080df71c
080DF88A: 607b         ldrb r0,[r4,#0xd]
080DF88C: 0130         add r0,#0x1
080DF88E: 6073         strb r0,[r4,#0xd]
080DF890: 201c         add r0,r4,#0x0
080DF892: fff78bff     bl 0x080df7ac
080DF896: 10bc         pop {r4}
080DF898: 01bc         pop {r0}
080DF89A: 0047         bx r0
