// undefined FUN_0800db78(void)
// entry 0x800db78


void FUN_0800db78(int param_1)

{
  int iVar1;
  uint uVar2;
  ushort *puVar3;
  iVar1 = 0x02000a04;
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar2 = (*(uint *)(param_1 + 0x5c) & 0xffff) >> 4;
    puVar3 = (ushort *)(uVar2 * 2 + 0x02000a04);
    *puVar3 = (ushort)*(undefined4 *)(param_1 + 0x60) | (ushort)*(undefined4 *)(param_1 + 100) |
              0x44;
    *(undefined4 *)(uVar2 * 4 + iVar1 + 8) = 0;
    *(undefined2 *)(param_1 + 0x70) = 0;
    *(undefined2 *)(param_1 + 0x6e) = 0;
    *(undefined2 *)(param_1 + 0x6c) = 0;
    *(undefined2 *)(param_1 + 0x6a) = 0;
    *(undefined2 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x84) = 0;
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
    if ((*(byte *)(0x02000ab0 + 0x0002c010) & 0xf) == 3) {
      FUN_08128be0((*(int *)0x08b2c0dc) + 0x08b2c0e4,(*puVar3 & 0x1f00) * 8 + 0x6000000,0x200);
    }
    else {
      FUN_08128be0((*(int *)0x08b2c17c) + 0x08b2c184,(*puVar3 & 0x1f00) * 8 + 0x6000000,0x200);
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(short *)(param_1 + 0x68) = *(short *)(param_1 + 0x68) + 0xc;
  *(short *)(param_1 + 0x6a) = *(short *)(param_1 + 0x6a) + 9;
  *(short *)(param_1 + 0x6c) = *(short *)(param_1 + 0x6c) + 5;
  *(short *)(param_1 + 0x6e) = *(short *)(param_1 + 0x6e) + 3;
  *(short *)(param_1 + 0x70) = *(short *)(param_1 + 0x70) + 2;
  return;
}


