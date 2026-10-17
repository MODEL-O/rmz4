; undefined FUN_0807fe9c(void)
; entry 0x807fe9c  size 40 bytes

0807FE9C: 10b5         push {r4,lr}
0807FE9E: 041c         add r4,r0,#0x0
0807FEA0: 206e         ldr r0,[r4,#0x60]
0807FEA2: 0028         cmp r0,#0x0
0807FEA4: 0bdd         ble 0x0807febe
0807FEA6: 606d         ldr r0,[r4,#0x54]
0807FEA8: a16d         ldr r1,[r4,#0x58]
0807FEAA: 4031         add r1,#0x40
0807FEAC: 87f7e6fe     bl 0x08007c7c
0807FEB0: 0004         lsl r0,r0,#0x10
0807FEB2: 0028         cmp r0,#0x0
0807FEB4: 03d0         beq 0x0807febe
0807FEB6: 0021         mov r1,#0x0
0807FEB8: 0220         mov r0,#0x2
0807FEBA: 6073         strb r0,[r4,#0xd]
0807FEBC: a173         strb r1,[r4,#0xe]
0807FEBE: 10bc         pop {r4}
0807FEC0: 01bc         pop {r0}
0807FEC2: 0047         bx r0
