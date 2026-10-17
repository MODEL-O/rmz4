// undefined FUN_0802b478(void)
// entry 0x802b478


undefined8 FUN_0802b478(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  puVar1 = DAT_0802b4c4;
  iVar2 = FUN_080054cc(*DAT_0802b4c4);
  iVar3 = iVar2;
  if ((iVar2 != 0) && (iVar2 != *DAT_0802b4c8)) {
    iVar3 = FUN_0802b478();
    FUN_080055c8(*puVar1,iVar2);
  }
  *(undefined1 *)(iVar3 + 0x10) = 0;
  *(undefined2 *)(iVar3 + 0x20) = 0;
  *(undefined1 *)(iVar3 + 0x22) = 0;
  *(byte *)(iVar3 + 0xb) = *(byte *)(iVar3 + 0xb) | 0x10;
  *(undefined1 *)(iVar3 + 0x1d) = *(undefined1 *)(iVar3 + 0x1c);
  return CONCAT44(in_lr,iVar3);
}


