// undefined FUN_0803ddf4(void)
// entry 0x803ddf4


undefined8 FUN_0803ddf4(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0xb4);
  if (((*(ushort *)(iVar3 + DAT_0803de40) & 0x8000) == 0) && ((*(ushort *)(iVar3 + 200) & 2) != 0))
  {
    if ((*(char *)(iVar3 + 0xc0) == '\0') && ((*(uint *)(iVar3 + 600) & 0x2000) != 0)) {
      if (*(char *)(param_1 + 0x13) == '\0') {
        uVar2 = 0;
LAB_0803de6a:
        cVar1 = FUN_0803a428(iVar3,uVar2);
        if ((cVar1 == '\x02') && (*(char *)(iVar3 + DAT_0803de94) == '\0')) {
          FUN_0803b2a4(iVar3,param_1,6);
          *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
        }
      }
    }
    else {
      if ((*(char *)(iVar3 + 0xc1) != '\0') || ((*(uint *)(iVar3 + 600) & 0x8000) == 0))
      goto LAB_0803de98;
      if (*(char *)(param_1 + 0x13) == '\0') {
        uVar2 = 1;
        goto LAB_0803de6a;
      }
    }
    uVar2 = 1;
  }
  else {
LAB_0803de98:
    uVar2 = 0;
  }
  return CONCAT44(in_lr,uVar2);
}


