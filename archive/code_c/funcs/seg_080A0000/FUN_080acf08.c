// undefined FUN_080acf08(void)
// entry 0x80acf08


undefined4 FUN_080acf08(int param_1)

{
  short sVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined4 in_lr;
  undefined4 local_34 [4];
  char acStack_24 [8];
  
  local_34[0] = *(undefined4 *)PTR_DAT_080acff0;
  local_34[1] = *(undefined4 *)(PTR_DAT_080acff0 + 4);
  local_34[2] = *(undefined4 *)(PTR_DAT_080acff0 + 8);
  local_34[3] = *(undefined4 *)(PTR_DAT_080acff0 + 0xc);
  FUN_08129258(acStack_24,PTR_DAT_080acff4,8);
  iVar2 = *(int *)(*(int *)(param_1 + 0x28) + 0x28);
  uVar4 = (uint)*(byte *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,*(undefined2 *)(local_34 + uVar4));
    *(int *)(param_1 + 100) = *(int *)(iVar2 + 0xb8) + acStack_24[uVar4 * 2] * -0x6800 + 0x7800;
    *(int *)(param_1 + 0x68) = *(int *)(iVar2 + 0xbc) + acStack_24[uVar4 * 2 + 1] * -0x4000 + 0x5000
    ;
    *(undefined1 *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  sVar1 = *(short *)(PTR_DAT_080acff8 + (*(byte *)(param_1 + 0x12) & 0x7f) * 4);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 100) + (int)acStack_24[uVar4 * 2] * sVar1 * -0x20;
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x68) + (int)acStack_24[uVar4 * 2 + 1] * sVar1 * -0x20;
  if (cVar3 == '\0') {
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


