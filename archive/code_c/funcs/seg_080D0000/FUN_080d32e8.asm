; undefined FUN_080d32e8(void)
; entry 0x80d32e8  size 42 bytes

080D32E8: 10b5         push {r4,lr}
080D32EA: 041c         add r4,r0,#0x0
080D32EC: 49f780fe     bl 0x0801cff0
080D32F0: 201c         add r0,r4,#0x0
080D32F2: 7330         add r0,#0x73
080D32F4: 0078         ldrb r0,[r0,#0x0]
080D32F6: 0328         cmp r0,#0x3
080D32F8: 08d1         bne 0x080d330c
080D32FA: 0649         ldr r1,[0x080d3314]
080D32FC: 607a         ldrb r0,[r4,#0x9]
080D32FE: 8000         lsl r0,r0,#0x2
080D3300: 4018         add r0,r0,r1
080D3302: 0221         mov r1,#0x2
080D3304: e160         str r1,[r4,#0xc]
080D3306: 0068         ldr r0,[r0,#0x0]
080D3308: 8068         ldr r0,[r0,#0x8]
080D330A: 6061         str r0,[r4,#0x14]
080D330C: 10bc         pop {r4}
080D330E: 01bc         pop {r0}
080D3310: 0047         bx r0
