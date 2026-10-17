// undefined FUN_08128cc0(void)
// entry 0x8128cc0


undefined8 FUN_08128cc0(uint param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  ushort uVar4;
  ushort *puVar5;
  ushort *puVar6;
  undefined4 in_lr;
  undefined1 auStack_98 [2];
  ushort auStack_96 [67];
  
  param_1 = param_1 & 0xffff;
  uVar3 = DAT_08128cdc;
  if (param_1 < *(ushort *)(*DAT_08128cd8 + 4)) {
    puVar5 = auStack_96 + *(byte *)(*DAT_08128d6c + 8);
    bVar1 = 0;
    if (*(byte *)(*DAT_08128d6c + 8) != 0) {
      do {
        *puVar5 = (ushort)param_1;
        puVar5 = puVar5 + -1;
        param_1 = param_1 >> 1;
        bVar1 = bVar1 + 1;
      } while (bVar1 < *(byte *)(*DAT_08128d6c + 8));
    }
    *puVar5 = 1;
    puVar5[-1] = 1;
    FUN_08128c40(auStack_98,&DAT_0d000000,*(byte *)(*DAT_08128d6c + 8) + 3);
    FUN_08128c40(&DAT_0d000000,auStack_98,0x44);
    puVar5 = auStack_96 + 3;
    puVar6 = (ushort *)(param_2 + 6);
    bVar1 = 0;
    do {
      uVar4 = 0;
      bVar2 = 0;
      do {
        uVar4 = uVar4 << 1 | *puVar5 & 1;
        puVar5 = puVar5 + 1;
        bVar2 = bVar2 + 1;
      } while (bVar2 < 0x10);
      *puVar6 = uVar4;
      puVar6 = puVar6 + -1;
      bVar1 = bVar1 + 1;
    } while (bVar1 < 4);
    uVar3 = 0;
  }
  return CONCAT44(in_lr,uVar3);
}


