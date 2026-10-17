; undefined FUN_0804b138(void)
; entry 0x804b138  size 30 bytes

0804B138: 00b5         push {lr}
0804B13A: 4069         ldr r0,[r0,#0x14]
0804B13C: 0421         mov r1,#0x4
0804B13E: 0840         and r0,r1
0804B140: 0028         cmp r0,#0x0
0804B142: 06d0         beq 0x0804b152
0804B144: 044a         ldr r2,[0x0804b158]
0804B146: d18b         ldrh r1,[r2,#0x1e]
0804B148: 0448         ldr r0,[0x0804b15c]
0804B14A: 8142         cmp r1,r0
0804B14C: 01d8         bhi 0x0804b152
0804B14E: 481c         add r0,r1,#0x1
0804B150: d083         strh r0,[r2,#0x1e]
0804B152: 01bc         pop {r0}
0804B154: 0047         bx r0
