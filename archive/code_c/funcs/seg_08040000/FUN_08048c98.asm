; undefined FUN_08048c98(void)
; entry 0x8048c98  size 40 bytes

08048C98: 10b5         push {r4,lr}
08048C9A: 041c         add r4,r0,#0x0
08048C9C: bd30         add r0,#0xbd
08048C9E: 0078         ldrb r0,[r0,#0x0]
08048CA0: 0028         cmp r0,#0x0
08048CA2: 07d0         beq 0x08048cb4
08048CA4: 211c         add r1,r4,#0x0
08048CA6: 5431         add r1,#0x54
08048CA8: 0120         mov r0,#0x1
08048CAA: 87f0edff     bl 0x080d0c88
08048CAE: 3520         mov r0,#0x35
08048CB0: b9f72eff     bl 0x08002b10
08048CB4: 201c         add r0,r4,#0x0
08048CB6: f1f7fdfd     bl 0x0803a8b4
08048CBA: 10bc         pop {r4}
08048CBC: 01bc         pop {r0}
08048CBE: 0047         bx r0
