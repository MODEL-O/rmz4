// undefined FUN_080cab5c(void)
// entry 0x80cab5c


undefined4 FUN_080cab5c(undefined4 *param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080cabb4);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 8;
    iVar1 = DAT_080cabb8;
    *(undefined1 *)(iVar2 + 9) = 0x25;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x94);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    uVar3 = param_1[1];
    *(undefined4 *)(iVar2 + 0x54) = *param_1;
    *(undefined4 *)(iVar2 + 0x58) = uVar3;
    *(byte *)(iVar2 + 0x10) = param_2;
    if (param_2 < 7) {
      FUN_080cab5c(param_1,param_2 + 1);
    }
  }
  return in_lr;
}


