// undefined FUN_080cabbc(void)
// entry 0x80cabbc


undefined4 FUN_080cabbc(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  int aiStack_4c [16];
  
  FUN_08129258(aiStack_4c,DAT_080cac6c,0x40);
  FUN_0801cc9c(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080cac70);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  bVar1 = *(byte *)(param_1 + 0x10);
  if ((bVar1 & 1) == 0) {
    if ((bVar1 == 0) || (bVar1 == 4)) {
      FUN_0801cf00(param_1,DAT_080cac9c);
      *(undefined4 *)(param_1 + 0x60) = DAT_080caca0;
      *(undefined4 *)(param_1 + 0x68) = 0xfffffff0;
    }
    else {
      FUN_0801cf00(param_1,DAT_080cadb0);
      *(undefined4 *)(param_1 + 0x5c) = DAT_080cadb4;
      *(undefined4 *)(param_1 + 100) = 0xfffffff0;
    }
  }
  else {
    FUN_0801cf00(param_1,DAT_080cac74);
    iVar6 = DAT_080cac78;
    iVar5 = (int)*(short *)(DAT_080cac78 + 0xc0);
    iVar3 = iVar5 * -0x200;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar3 >> 8;
    iVar6 = (int)*(short *)(iVar6 + 0x40);
    iVar3 = iVar6 * -0x200;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 0x60) = iVar3 >> 8;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xf;
    }
    iVar3 = (iVar5 >> 4) * -0x100;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 100) = iVar3 >> 8;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xf;
    }
    iVar3 = (iVar6 >> 4) * -0x100;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 0x68) = iVar3 >> 8;
  }
  cVar4 = *(char *)(param_1 + 0x10);
  if ((byte)(cVar4 - 3U) < 3) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
    *(undefined1 *)(param_1 + 0x4d) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf | 0x20;
    iVar3 = *(int *)(param_1 + 0x60) * -0x100;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 0x60) = iVar3 >> 8;
    iVar3 = *(int *)(param_1 + 0x68) * -0x100;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 0x68) = iVar3 >> 8;
    cVar4 = *(char *)(param_1 + 0x10);
  }
  if ((byte)(cVar4 - 5U) < 3) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined1 *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    iVar3 = *(int *)(param_1 + 0x5c) * -0x100;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar3 >> 8;
    iVar3 = *(int *)(param_1 + 100) * -0x100;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 100) = iVar3 >> 8;
  }
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0x54) + aiStack_4c[(uint)*(byte *)(param_1 + 0x10) * 2] * 0x100;
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x58) + aiStack_4c[(uint)*(byte *)(param_1 + 0x10) * 2 + 1] * 0x100;
  *(undefined4 *)(param_1 + 0xb4) = 0x200;
  *(undefined1 *)(param_1 + 0x12) = 0xc4;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080cadb8,param_1 + 0x54,0xff);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_080cadbc;
  FUN_080cadc0(param_1);
  return in_lr;
}


