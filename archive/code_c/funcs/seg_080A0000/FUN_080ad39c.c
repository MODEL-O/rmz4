// undefined FUN_080ad39c(void)
// entry 0x80ad39c


undefined4 FUN_080ad39c(int param_1)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 in_lr;
  undefined4 local_20 [4];
  
  local_20[0] = *DAT_080ad460;
  local_20[1] = DAT_080ad460[1];
  local_20[2] = DAT_080ad460[2];
  local_20[3] = DAT_080ad460[3];
  iVar7 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xf) == '\0') {
    iVar4 = *(int *)(param_1 + 0xb8);
    if (iVar4 != 0) {
      *(undefined1 *)(iVar4 + 0xb4) = 1;
      *(int *)(param_1 + 0xb8) = 0;
      pcVar5 = (char *)(iVar7 + 0xbc);
      cVar2 = *pcVar5;
      if (cVar2 != '\0') {
        *pcVar5 = cVar2 + -1;
      }
    }
    FUN_0801d3d0(param_1,5);
    pbVar6 = (byte *)(iVar7 + 0xb4);
    *pbVar6 = *pbVar6 & ~(byte)(1 << (uint)bVar1);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    FUN_0801cf00(param_1,*(undefined2 *)(local_20 + bVar1));
    *(undefined1 *)(param_1 + 0x12) = 10;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    FUN_08002b10(0x2a);
    FUN_080d0c88(1,param_1 + 0x54);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ad464);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0x10);
  }
  return in_lr;
}


