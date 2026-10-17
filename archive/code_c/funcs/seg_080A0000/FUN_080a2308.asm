; undefined FUN_080a2308(void)
; entry 0x80a2308  size 62 bytes

080A2308: 10b5         push {r4,lr}
080A230A: 041c         add r4,r0,#0x0
080A230C: 8c30         add r0,#0x8c
080A230E: 0068         ldr r0,[r0,#0x0]
080A2310: 8021         mov r1,#0x80
080A2312: 8900         lsl r1,r1,#0x2
080A2314: 0840         and r0,r1
080A2316: 0028         cmp r0,#0x0
080A2318: 0ed0         beq 0x080a2338
080A231A: 0649         ldr r1,[0x080a2334]
080A231C: 607a         ldrb r0,[r4,#0x9]
080A231E: 8000         lsl r0,r0,#0x2
080A2320: 4018         add r0,r0,r1
080A2322: 0221         mov r1,#0x2
080A2324: e160         str r1,[r4,#0xc]
080A2326: 0068         ldr r0,[r0,#0x0]
080A2328: 8068         ldr r0,[r0,#0x8]
080A232A: 6061         str r0,[r4,#0x14]
080A232C: 201c         add r0,r4,#0x0
080A232E: 00f00df8     bl 0x080a234c
080A2332: 07e0         b 0x080a2344
080A2338: 201c         add r0,r4,#0x0
080A233A: 00f03df8     bl 0x080a23b8
080A233E: 201c         add r0,r4,#0x0
080A2340: 7af756fe     bl 0x0801cff0
080A2344: 10bc         pop {r4}
080A2346: 01bc         pop {r0}
080A2348: 0047         bx r0
