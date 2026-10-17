// undefined FUN_080a77f4(void)
// entry 0x80a77f4


undefined4 FUN_080a77f4(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,DAT_080a781c);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(undefined4 *)(param_1 + 100) = 0x10;
    }
    else {
      *(undefined4 *)(param_1 + 100) = 0xfffffff0;
    }
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 100) * -0x10;
    FUN_080dd574(param_1 + 0x54,4,0,*(byte *)(param_1 + 10) >> 4 & 1);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  local_18 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = local_18;
  iVar3 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x5c) = iVar3;
  iVar1 = DAT_080a78e4;
  if (iVar3 == 0) {
    local_14 = *(int *)(param_1 + 0x58) + DAT_080a78e0;
    FUN_080d4c8c(&local_18,DAT_080a78e4,0,*(byte *)(param_1 + 10) & 0x10);
    FUN_080d4c8c(&local_18,iVar1 + 0x54,0,*(byte *)(param_1 + 10) & 0x10);
    FUN_080d0c88(1,&local_18);
    FUN_08002b10(0x2a);
    FUN_0802ab88(4,0x2d,param_1 + 0x54);
    if (*(ushort *)(DAT_080a78e8 + 0xc) <= DAT_080a78ec) {
      *(ushort *)(DAT_080a78e8 + 0xc) = *(ushort *)(DAT_080a78e8 + 0xc) + 1;
    }
    FUN_0802abe0(param_1,param_1 + 0x54);
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a78f0);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0x10);
  }
  return in_lr;
}


