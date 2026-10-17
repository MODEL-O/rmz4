; undefined FUN_080bd418(void)
; entry 0x80bd418  size 28 bytes

080BD418: 00b5         push {lr}
080BD41A: 011c         add r1,r0,#0x0
080BD41C: 0448         ldr r0,[0x080bd430]
080BD41E: 0068         ldr r0,[r0,#0x0]
080BD420: 5431         add r1,#0x54
080BD422: 5ff785fb     bl 0x0801cb30
080BD426: 0028         cmp r0,#0x0
080BD428: 04d1         bne 0x080bd434
080BD42A: 0020         mov r0,#0x0
080BD42C: 03e0         b 0x080bd436
080BD434: 5430         add r0,#0x54
080BD436: 02bc         pop {r1}
080BD438: 0847         bx r1
