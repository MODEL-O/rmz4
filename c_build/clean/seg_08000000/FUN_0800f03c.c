// undefined FUN_0800f03c(void)
// entry 0x800f03c


void FUN_0800f03c(int param_1)

{
  undefined2 *puVar1;
  ushort uVar2;
  ushort *puVar3;
  puVar1 = DAT_0800f0d4;
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(int *)DAT_0800f0d4 = (short)DAT_0800f0d8;
    puVar1[1] = (short)DAT_0800f0dc;
    *(undefined4 *)(DAT_0800f0e0 + DAT_0800f0e4) = 0x14000;
    *(undefined4 *)(param_1 + 0x44) = 0x100;
    *(undefined4 *)(param_1 + 0x48) = 0x100;
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined2 *)(param_1 + 0x6c) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(int *)(param_1 + 0x44) == 0x100) && (0x1e0 < *(int *)(param_1 + 0x38))) {
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0xc0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0xc0;
  }
  puVar3 = (ushort *)(param_1 + 0x6c);
  if ((*(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x34)) * 0x10 + 0xf00 < (int)(uint)*puVar3) {
    *puVar3 = 0;
    *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x34) & DAT_0800f0e8;
  }
  *puVar3 = *puVar3 + 8;
  uVar2 = *(short *)(param_1 + 0x10) + 1;
  *(ushort *)(param_1 + 0x10) = uVar2;
  if (0xff < uVar2) {
    *(undefined2 *)(param_1 + 0x10) = 0;
  }
  return;
}


