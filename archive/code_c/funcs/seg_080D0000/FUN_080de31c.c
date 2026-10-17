// undefined FUN_080de31c(void)
// entry 0x80de31c


undefined8
FUN_080de31c(undefined4 *param_1,undefined4 *param_2,undefined1 param_3,undefined1 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080de378);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 1;
    iVar1 = DAT_080de37c;
    *(undefined1 *)(iVar2 + 9) = 0x2e;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0xb8);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    uVar3 = param_1[1];
    *(undefined4 *)(iVar2 + 0x54) = *param_1;
    *(undefined4 *)(iVar2 + 0x58) = uVar3;
    uVar3 = param_2[1];
    *(undefined4 *)(iVar2 + 0x5c) = *param_2;
    *(undefined4 *)(iVar2 + 0x60) = uVar3;
    *(undefined1 *)(iVar2 + 0x10) = param_3;
    *(undefined1 *)(iVar2 + 0x11) = param_4;
  }
  return CONCAT44(in_lr,iVar2);
}


