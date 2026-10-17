// undefined FUN_080ce784(void)
// entry 0x80ce784


undefined4 FUN_080ce784(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  bVar1 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar1 | 3;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ce800);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  *(byte *)(param_1 + 10) = bVar1 | 7;
  FUN_08005760(param_1 + 0x74,DAT_080ce804,param_1 + 0x54,0xff);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_080ce808;
  *(undefined1 *)(param_1 + 0xb9) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined1 *)(param_1 + 0xb8) = 1;
  *(undefined1 *)(param_1 + 0xba) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0xc4;
  FUN_0801cf00(param_1,DAT_080ce80c);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar3 = *(int *)(param_1 + 0x54);
    iVar4 = DAT_080ce84c;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x54);
    iVar4 = 0xd00;
  }
  *(int *)(param_1 + 0x54) = iVar3 + iVar4;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + DAT_080ce850;
  *(undefined4 *)(param_1 + 0x5c) = 0x200;
  *(undefined4 *)(param_1 + 0x60) = DAT_080ce854;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x5c) = 0xfffffe00;
  }
  FUN_080ce858(param_1);
  return in_lr;
}


