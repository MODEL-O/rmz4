; undefined FUN_08029384(void)
; entry 0x8029384  size 52 bytes

08029384: 00b5         push {lr}
08029386: c268         ldr r2,[r0,#0xc]
08029388: 5368         ldr r3,[r2,#0x4]
0802938A: 1901         lsl r1,r3,#0x4
0802938C: 1031         add r1,#0x10
0802938E: 4018         add r0,r0,r1
08029390: 0168         ldr r1,[r0,#0x0]
08029392: 5078         ldrb r0,[r2,#0x1]
08029394: 0028         cmp r0,#0x0
08029396: 05d1         bne 0x080293a4
08029398: 0221         mov r1,#0x2
0802939A: 505e         ldrsh r0,[r2,r1]
0802939C: 191c         add r1,r3,#0x0
0802939E: 01f0a5fb     bl 0x0802aaec
080293A2: 06e0         b 0x080293b2
080293A4: 0029         cmp r1,#0x0
080293A6: 04d0         beq 0x080293b2
080293A8: 0223         mov r3,#0x2
080293AA: d05e         ldrsh r0,[r2,r3]
080293AC: 5431         add r1,#0x54
080293AE: 01f09dfb     bl 0x0802aaec
080293B2: 0020         mov r0,#0x0
080293B4: 02bc         pop {r1}
080293B6: 0847         bx r1
