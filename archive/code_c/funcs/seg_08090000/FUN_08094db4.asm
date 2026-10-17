; undefined FUN_08094db4(void)
; entry 0x8094db4  size 46 bytes

08094DB4: 00b5         push {lr}
08094DB6: 826d         ldr r2,[r0,#0x58]
08094DB8: 0548         ldr r0,[0x08094dd0]
08094DBA: 0068         ldr r0,[r0,#0x0]
08094DBC: 806d         ldr r0,[r0,#0x58]
08094DBE: 054b         ldr r3,[0x08094dd4]
08094DC0: c118         add r1,r0,r3
08094DC2: 054b         ldr r3,[0x08094dd8]
08094DC4: d018         add r0,r2,r3
08094DC6: 8142         cmp r1,r0
08094DC8: 08da         bge 0x08094ddc
08094DCA: 0020         mov r0,#0x0
08094DCC: 0ee0         b 0x08094dec
08094DDC: 8023         mov r3,#0x80
08094DDE: 1b01         lsl r3,r3,#0x4
08094DE0: d018         add r0,r2,r3
08094DE2: 8142         cmp r1,r0
08094DE4: 01dc         bgt 0x08094dea
08094DE6: 0120         mov r0,#0x1
08094DE8: 00e0         b 0x08094dec
08094DEA: 0220         mov r0,#0x2
08094DEC: 02bc         pop {r1}
08094DEE: 0847         bx r1
