// undefined FUN_0810bd40(void)
// entry 0x810bd40


undefined4 FUN_0810bd40(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3;
  *(undefined1 *)(param_1 + 0x25) = 0x11;
  if (*(char *)(param_1 + 0x11) == '\0') {
    FUN_0801cf00(param_1,DAT_0810bd7c);
  }
  else {
    iVar1 = DAT_0810bdc0;
    if ((*(uint *)(*DAT_0810bdb8 + 0x10) &
        1 << *(sbyte *)((uint)*(byte *)(param_1 + 0x11) + DAT_0810bdbc)) != 0) {
      iVar1 = DAT_0810bdc0 + -1;
    }
    FUN_0801cf00(param_1,iVar1);
  }
  puVar2 = (undefined4 *)((uint)*(byte *)(param_1 + 0x11) * 8 + DAT_0810bdc4);
  uVar3 = puVar2[1];
  *(undefined4 *)(param_1 + 0x54) = *puVar2;
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  return in_lr;
}


