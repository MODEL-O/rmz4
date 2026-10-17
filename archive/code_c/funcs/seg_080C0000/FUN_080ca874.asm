; undefined FUN_080ca874(void)
; entry 0x80ca874  size 66 bytes

080CA874: 10b5         push {r4,lr}
080CA876: 041c         add r4,r0,#0x0
080CA878: 52f7bafb     bl 0x0801cff0
080CA87C: 606d         ldr r0,[r4,#0x54]
080CA87E: e16d         ldr r1,[r4,#0x5c]
080CA880: 4018         add r0,r0,r1
080CA882: 6065         str r0,[r4,#0x54]
080CA884: a06d         ldr r0,[r4,#0x58]
080CA886: 216e         ldr r1,[r4,#0x60]
080CA888: 4018         add r0,r0,r1
080CA88A: a065         str r0,[r4,#0x58]
080CA88C: 0a48         ldr r0,[0x080ca8b8]
080CA88E: 211c         add r1,r4,#0x0
080CA890: 5431         add r1,#0x54
080CA892: 55f73ff9     bl 0x0801fb14
080CA896: c021         mov r1,#0xc0
080CA898: c901         lsl r1,r1,#0x7
080CA89A: 8842         cmp r0,r1
080CA89C: 08d9         bls 0x080ca8b0
080CA89E: 0749         ldr r1,[0x080ca8bc]
080CA8A0: 607a         ldrb r0,[r4,#0x9]
080CA8A2: 8000         lsl r0,r0,#0x2
080CA8A4: 4018         add r0,r0,r1
080CA8A6: 0221         mov r1,#0x2
080CA8A8: e160         str r1,[r4,#0xc]
080CA8AA: 0068         ldr r0,[r0,#0x0]
080CA8AC: 8068         ldr r0,[r0,#0x8]
080CA8AE: 6061         str r0,[r4,#0x14]
080CA8B0: 10bc         pop {r4}
080CA8B2: 01bc         pop {r0}
080CA8B4: 0047         bx r0
