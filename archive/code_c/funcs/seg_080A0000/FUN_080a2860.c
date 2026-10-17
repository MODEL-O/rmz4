// undefined FUN_080a2860(void)
// entry 0x80a2860


undefined4 FUN_080a2860(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  undefined4 local_18 [2];
  
  local_18[1] = DAT_080a28e4[1];
  local_18[0] = *DAT_080a28e4;
  iVar3 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined1 *)(param_1 + 0x25) = 0x19;
    FUN_08005784(param_1 + 0x74,DAT_080a28e8);
    FUN_0801cf00(param_1,0x8400);
    *(undefined4 *)(param_1 + 100) = local_18[bVar1];
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(byte *)(iVar3 + 0xc) < 2) {
    FUN_0801cff0(param_1);
    if (*(int *)(param_1 + 0x2c) == 0) {
      iVar3 = *(int *)(param_1 + 100) + -1;
      *(int *)(param_1 + 100) = iVar3;
      if (iVar3 == 0) {
        *(undefined1 *)(param_1 + 0xd) = 1;
        *(undefined1 *)(param_1 + 0xe) = 0;
        *(undefined1 *)(param_1 + 0xf) = 0;
      }
    }
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a28ec);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0xc);
  }
  return in_lr;
}


