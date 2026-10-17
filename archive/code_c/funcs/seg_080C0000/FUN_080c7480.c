// undefined FUN_080c7480(void)
// entry 0x80c7480


undefined4 FUN_080c7480(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 uVar7;
  undefined4 in_lr;
  int local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  uVar5 = *(undefined4 *)(param_1 + 0x28);
  uVar7 = 0;
  iVar6 = 0;
  local_30 = *(int *)(param_1 + 0x54);
  local_2c = *(int *)(param_1 + 0x58);
  FUN_0801cff0(param_1);
  local_48 = 0;
  local_44 = 0;
  local_40 = 0x800;
  local_3c = 0x800;
  local_28 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  local_24 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  local_38 = *(int *)(param_1 + 0x54);
  local_34 = *(undefined4 *)(param_1 + 0x58);
  iVar3 = FUN_08066454(uVar5,&local_38,&local_48,&local_40);
  if ((iVar3 != 0) && (uVar7 = 1, *(char *)(param_1 + 0xb5) == '\0')) {
    iVar6 = 1;
  }
  local_38 = local_28;
  local_34 = local_24;
  iVar3 = FUN_08066454(uVar5,&local_38,&local_48,&local_40);
  if ((iVar3 != 0) && (uVar7 = 1, *(char *)(param_1 + 0xb5) == '\0')) {
    iVar6 = 1;
  }
  local_38 = local_28;
  local_34 = local_2c;
  sVar2 = FUN_08007c7c(local_28 + local_48,local_2c + local_44);
  if (sVar2 != 0) {
    iVar6 = 1;
  }
  local_38 = local_30;
  local_34 = local_24;
  sVar2 = FUN_08007c7c(local_30 + local_48,local_24 + local_44);
  if ((iVar6 == 0) && ((sVar2 != 0) == 0)) {
    *(int *)(param_1 + 0x54) = local_28;
    *(int *)(param_1 + 0x58) = local_24;
  }
  else {
    cVar1 = *(char *)(param_1 + 0xb4) + -1;
    *(char *)(param_1 + 0xb4) = cVar1;
    if (cVar1 == '\0') {
      piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c7590);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 8);
      FUN_080c7648(param_1);
      return in_lr;
    }
    FUN_08002b10(DAT_080c75b8);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) * (iVar6 * -2 + 1);
    *(uint *)(param_1 + 0x60) = ((uint)(sVar2 != 0) * -2 + 1) * *(int *)(param_1 + 0x60);
  }
  *(undefined1 *)(param_1 + 0xb5) = uVar7;
  return in_lr;
}


