; undefined FUN_080012ec(void)
; entry 0x80012ec  size 50 bytes

080012EC: 00b5         push {lr}
080012EE: 031c         add r3,r0,#0x0
080012F0: 0b4a         ldr r2,[0x08001320]
080012F2: 0c49         ldr r1,[0x08001324]
080012F4: 5018         add r0,r2,r1
080012F6: 0168         ldr r1,[r0,#0x0]
080012F8: 4800         lsl r0,r1,#0x1
080012FA: 4018         add r0,r0,r1
080012FC: c000         lsl r0,r0,#0x3
080012FE: 0a49         ldr r1,[0x08001328]
08001300: 5218         add r2,r2,r1
08001302: 8118         add r1,r0,r2
08001304: 002b         cmp r3,#0x0
08001306: 08d0         beq 0x0800131a
08001308: 4b80         strh r3,[r1,#0x2]
0800130A: 0420         mov r0,#0x4
0800130C: 0870         strb r0,[r1,#0x0]
0800130E: 081d         add r0,r1,#0x4
08001310: 0831         add r1,#0x8
08001312: 064a         ldr r2,[0x0800132c]
08001314: 1268         ldr r2,[r2,#0x0]
08001316: fef7f3ff     bl 0x08000300
0800131A: 01bc         pop {r0}
0800131C: 0047         bx r0
