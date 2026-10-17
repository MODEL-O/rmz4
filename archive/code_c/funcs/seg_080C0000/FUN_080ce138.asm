; undefined FUN_080ce138(void)
; entry 0x80ce138  size 72 bytes

080CE138: 10b5         push {r4,lr}
080CE13A: 041c         add r4,r0,#0x0
080CE13C: 4ef758ff     bl 0x0801cff0
080CE140: 606d         ldr r0,[r4,#0x54]
080CE142: e16d         ldr r1,[r4,#0x5c]
080CE144: 4018         add r0,r0,r1
080CE146: 6065         str r0,[r4,#0x54]
080CE148: a06d         ldr r0,[r4,#0x58]
080CE14A: 216e         ldr r1,[r4,#0x60]
080CE14C: 4018         add r0,r0,r1
080CE14E: a065         str r0,[r4,#0x58]
080CE150: 0b48         ldr r0,[0x080ce180]
080CE152: 211c         add r1,r4,#0x0
080CE154: 5431         add r1,#0x54
080CE156: 51f7ddfc     bl 0x0801fb14
080CE15A: c021         mov r1,#0xc0
080CE15C: 8901         lsl r1,r1,#0x6
080CE15E: 8842         cmp r0,r1
080CE160: 0bd9         bls 0x080ce17a
080CE162: 0849         ldr r1,[0x080ce184]
080CE164: 607a         ldrb r0,[r4,#0x9]
080CE166: 8000         lsl r0,r0,#0x2
080CE168: 4018         add r0,r0,r1
080CE16A: 0221         mov r1,#0x2
080CE16C: e160         str r1,[r4,#0xc]
080CE16E: 0068         ldr r0,[r0,#0x0]
080CE170: 8068         ldr r0,[r0,#0x8]
080CE172: 6061         str r0,[r4,#0x14]
080CE174: 201c         add r0,r4,#0x0
080CE176: fff75bfe     bl 0x080cde30
080CE17A: 10bc         pop {r4}
080CE17C: 01bc         pop {r0}
080CE17E: 0047         bx r0
