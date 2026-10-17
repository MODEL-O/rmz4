// undefined FUN_08086a48(void)
// entry 0x8086a48


undefined8 FUN_08086a48(int param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 in_lr;
  
  uVar8 = 0;
  pcVar7 = (char *)(param_1 + 0xb5);
  if (*pcVar7 < '\x01') {
    if (-1 < *pcVar7) goto LAB_08086afa;
    pcVar6 = (char *)(param_1 + 0xb6);
    cVar1 = *pcVar6;
    *pcVar6 = cVar1 + '\x01';
    puVar5 = (uint *)(param_1 + 0xb4);
    if (cVar1 == -1) {
      *(byte *)puVar5 = *(byte *)puVar5 + 0x17;
      bVar2 = FUN_08129198(*(byte *)puVar5,0x18);
      *(byte *)puVar5 = bVar2;
      *pcVar6 = *pcVar7;
      FUN_0801cf00(param_1,*(undefined2 *)((uint)*(byte *)puVar5 * 4 + DAT_08086b0c));
    }
    uVar3 = *puVar5 & DAT_08086b10;
    uVar4 = DAT_08086b10 - 0xff;
  }
  else {
    pcVar6 = (char *)(param_1 + 0xb6);
    cVar1 = *pcVar6;
    *pcVar6 = cVar1 + -1;
    puVar5 = (uint *)(param_1 + 0xb4);
    if ((char)(cVar1 + -1) == '\0') {
      *(byte *)puVar5 = *(byte *)puVar5 + 1;
      bVar2 = FUN_08129198(*(byte *)puVar5,0x18);
      *(byte *)puVar5 = bVar2;
      *pcVar6 = *pcVar7;
      FUN_0801cf00(param_1,*(undefined2 *)((uint)*(byte *)puVar5 * 4 + DAT_08086aa4));
    }
    uVar3 = *puVar5 & DAT_08086aa8;
    uVar4 = 0x10000;
  }
  if (uVar3 == uVar4) {
    uVar8 = 0xffffffff;
  }
LAB_08086afa:
  FUN_0801cff0(param_1);
  return CONCAT44(in_lr,uVar8);
}


