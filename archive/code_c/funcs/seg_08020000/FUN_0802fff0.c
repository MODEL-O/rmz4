// undefined FUN_0802fff0(void)
// entry 0x802fff0


undefined4 FUN_0802fff0(int param_1)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x2c);
  iVar4 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    uVar1 = FUN_08005b30(*(int *)(param_1 + 0xc),param_1);
    FUN_0801ebd0(uVar1);
    *(undefined1 *)(iVar3 + 0x176) = 1;
  }
  uVar2 = *(uint *)(param_1 + 0x14);
  if ((uVar2 & 0x200) == 0) {
    if (*(char *)(iVar3 + 0xd) == '\x05') {
      return in_lr;
    }
    if ((uVar2 & 0x400) != 0) {
      *(byte *)(iVar3 + 0x142) =
           *(byte *)(iVar3 + 0x142) & 0xfe | *(int *)(iVar3 + 0x54) < *(int *)(iVar4 + 0x54);
      *(undefined1 *)(iVar3 + 0xd) = 5;
      *(undefined1 *)(iVar3 + 0xe) = 0;
      return in_lr;
    }
  }
  if ((((uVar2 & 1) != 0) && (*(char *)(iVar3 + 0xd) != '\a')) && (*(char *)(iVar3 + 0xd) != '\v'))
  {
    *(byte *)(iVar3 + 0x142) =
         *(byte *)(iVar3 + 0x142) & 0xfe | *(int *)(iVar3 + 0x54) < *(int *)(iVar4 + 0x54);
    *(undefined1 *)(iVar3 + 0xd) = 4;
    *(undefined1 *)(iVar3 + 0xe) = 0;
  }
  return in_lr;
}


