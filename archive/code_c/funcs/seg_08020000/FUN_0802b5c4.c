// undefined FUN_0802b5c4(void)
// entry 0x802b5c4


undefined8 FUN_0802b5c4(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  ushort *puVar4;
  undefined4 in_lr;
  
  puVar4 = (ushort *)(param_1 + 0xa4);
  uVar1 = *puVar4;
  uVar2 = FUN_0802b61c(param_1);
  if ((short)uVar1 < (short)(uVar2 & 0xff)) {
    *puVar4 = *puVar4 + 1;
    FUN_08002b10(0x1f);
    uVar1 = *puVar4;
    uVar2 = FUN_0802b61c(param_1);
    if (uVar1 != (uVar2 & 0xff)) {
      uVar3 = 1;
      goto LAB_0802b602;
    }
  }
  uVar3 = 0;
LAB_0802b602:
  return CONCAT44(in_lr,uVar3);
}


