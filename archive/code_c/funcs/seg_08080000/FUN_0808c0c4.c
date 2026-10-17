// undefined FUN_0808c0c4(void)
// entry 0x808c0c4


undefined4 FUN_0808c0c4(int param_1)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  byte *pbVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  undefined4 local_28 [4];
  
  local_28[0] = *DAT_0808c104;
  local_28[1] = DAT_0808c104[1];
  local_28[2] = DAT_0808c104[2];
  local_28[3] = DAT_0808c104[3];
  iVar7 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(iVar7 + 10);
  if (*(byte *)(iVar7 + 0xc) < 2) {
    iVar6 = *(int *)(param_1 + 0xb4);
    if (DAT_0808c138 < (uint)((iVar6 - *(int *)(iVar7 + 0x54)) + DAT_0808c134)) {
      if (*(int *)(iVar7 + 0x54) - iVar6 < 0) {
        bVar2 = *(char *)(param_1 + 0xb8) + 1;
      }
      else {
        bVar2 = *(char *)(param_1 + 0xb8) + 3;
      }
      pbVar4 = (byte *)(param_1 + 0xb8);
      *pbVar4 = bVar2;
      *pbVar4 = *pbVar4 & 3;
      FUN_0801cf00(param_1,*(undefined2 *)(local_28 + *pbVar4));
      *(int *)(param_1 + 0xb4) = *(int *)(iVar7 + 0x54);
    }
    FUN_0801cff0(param_1);
    uVar5 = *(undefined4 *)(iVar7 + 0x58);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar7 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = uVar5;
    *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (bVar1 >> 4 & 1) * 0x100;
  }
  else {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0808c108);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    FUN_0808c188(param_1);
  }
  return in_lr;
}


