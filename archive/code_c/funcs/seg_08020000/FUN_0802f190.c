// undefined FUN_0802f190(void)
// entry 0x802f190


undefined8 FUN_0802f190(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = FUN_0802b478();
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 0x10;
    puVar1 = DAT_0802f1c8;
    *(undefined1 *)(iVar2 + 9) = 0;
    *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)*puVar1;
    uVar3 = param_1[1];
    *(undefined4 *)(iVar2 + 0x54) = *param_1;
    *(undefined4 *)(iVar2 + 0x58) = uVar3;
    *(undefined1 *)(iVar2 + 0x10) = 0;
    *(undefined1 *)(iVar2 + 0x11) = 0;
  }
  return CONCAT44(in_lr,iVar2);
}


