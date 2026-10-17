// undefined FUN_080156f8(void)
// entry 0x80156f8


undefined4 FUN_080156f8(int param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  ushort uVar3;
  int iVar4;
  undefined4 in_lr;
  
  puVar2 = DAT_080157a4;
  puVar1 = DAT_08015774;
  if ((*(byte *)(DAT_0801576c + DAT_08015770) & 0xf) == 1) {
    if (*(char *)(param_1 + 0xe) == '\0') {
      *DAT_08015774 = (short)DAT_08015778;
      puVar1[1] = (short)DAT_0801577c;
      *(undefined4 *)(param_1 + 0x68) = 0x1400;
      *(undefined2 *)(param_1 + 0x10) = 0;
      *(undefined1 *)(param_1 + 0xe) = 1;
    }
    uVar3 = *(short *)(param_1 + 0x10) + 4;
    *(ushort *)(param_1 + 0x10) = uVar3;
    if (0xff < uVar3) {
      *(undefined2 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x68) = 0x1400;
    }
    iVar4 = *(int *)(param_1 + 0x68) +
            (int)*(short *)((uint)*(byte *)(param_1 + 0x10) * 2 + DAT_08015780);
    *(int *)(param_1 + 0x68) = iVar4;
    puVar1[1] = (ushort)(iVar4 >> 10) & 0x1f | ((short)(0x1400 - iVar4 >> 10) + 0xc) * 0x100;
  }
  else if (*(char *)(param_1 + 0xe) == '\0') {
    *DAT_080157a4 = (short)DAT_080157a8;
    puVar2[1] = 0x1000;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}


