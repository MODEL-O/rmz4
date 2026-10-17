; undefined FUN_080b793c(void)
; entry 0x80b793c  size 78 bytes

080B793C: 70b5         push {r4,r5,r6,lr}
080B793E: 051c         add r5,r0,#0x0
080B7940: ae7c         ldrb r6,[r5,#0x12]
080B7942: 301c         add r0,r6,#0x0
080B7944: 0c21         mov r1,#0xc
080B7946: 71f027fc     bl 0x08129198
080B794A: 0006         lsl r0,r0,#0x18
080B794C: 0028         cmp r0,#0x0
080B794E: 10d1         bne 0x080b7972
080B7950: 2c1c         add r4,r5,#0x0
080B7952: 5434         add r4,#0x54
080B7954: 301c         add r0,r6,#0x0
080B7956: 0c21         mov r1,#0xc
080B7958: 71f0e2fb     bl 0x08129120
080B795C: 011c         add r1,r0,#0x0
080B795E: 0139         sub r1,#0x1
080B7960: 0906         lsl r1,r1,#0x18
080B7962: 090e         lsr r1,r1,#0x18
080B7964: 281c         add r0,r5,#0x0
080B7966: b430         add r0,#0xb4
080B7968: 0278         ldrb r2,[r0,#0x0]
080B796A: 201c         add r0,r4,#0x0
080B796C: eaf722fc     bl 0x080a21b4
080B7970: 08e0         b 0x080b7984
080B7972: 281c         add r0,r5,#0x0
080B7974: 5430         add r0,#0x54
080B7976: 291c         add r1,r5,#0x0
080B7978: b431         add r1,#0xb4
080B797A: 0978         ldrb r1,[r1,#0x0]
080B797C: 2a1c         add r2,r5,#0x0
080B797E: b532         add r2,#0xb5
080B7980: 29f09cfc     bl 0x080e12bc
080B7984: 70bc         pop {r4,r5,r6}
080B7986: 01bc         pop {r0}
080B7988: 0047         bx r0
