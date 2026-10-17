// undefined FUN_081255f8(void)
// entry 0x81255f8


undefined8 FUN_081255f8(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  undefined4 in_lr;
  
  piVar8 = (int *)(DAT_081256b8 + param_1);
  uVar3 = FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(piVar8 + 6) * 4 + DAT_081256b4));
  *(undefined2 *)(*piVar8 + 0xa4) = 0x10;
  if ((piVar8[9] & 3U) == 1) {
    iVar7 = piVar8[5];
    iVar4 = FUN_08128fb8(0xe10 - iVar7,0x3c);
    piVar8[2] = iVar4 * 0x3c;
    iVar7 = FUN_08129050(iVar7,0x3c);
    iVar7 = FUN_08128fb8(iVar7 * 0xa7,100);
    iVar7 = FUN_08128fb8((100U - iVar7 & 0xff) * 100,0xa7);
    piVar8[2] = iVar4 * 0x3c + iVar7;
  }
  FUN_0810da2c(DAT_081256bc,1,0);
  uVar5 = FUN_08128fb8(piVar8[2],0x3c);
  FUN_0810dae0(uVar5,7,0);
  FUN_0810da2c(DAT_081256c0,8,0);
  if (piVar8[5] == 0xe10) {
    bVar2 = 0;
  }
  else {
    iVar4 = FUN_08129050(piVar8[5],0x3c);
    cVar1 = FUN_08128fb8(iVar4 * 0xa7,100);
    bVar2 = 100 - cVar1;
  }
  if (bVar2 == 100) {
    bVar2 = 0;
  }
  FUN_0810dae0(bVar2,10,0);
  if (bVar2 < 10) {
    FUN_0810dae0(0,9,0);
  }
  FUN_0810da2c(DAT_081257b0,0xd,0);
  param_1 = DAT_081257b4 + param_1;
  uVar5 = FUN_08128fb8(*(undefined4 *)(param_1 + 0x10),0x3c);
  FUN_0810dae0(uVar5,0x18,0);
  uVar5 = DAT_081257b8;
  FUN_0810da2c(DAT_081257b8,0x19,0);
  iVar4 = FUN_08129050(0xe10 - *(int *)(param_1 + 0x10),0x3c);
  cVar1 = FUN_08128fb8(iVar4 * 0xa7,100);
  bVar2 = 100 - cVar1;
  if (bVar2 == 100) {
    bVar2 = 0;
  }
  FUN_0810dae0(bVar2,0x1b,0);
  if (bVar2 < 10) {
    FUN_0810dae0(0,0x1a,0);
  }
  FUN_0810da2c(DAT_081257bc,9,0x12);
  uVar6 = FUN_08128fb8(*(undefined4 *)(param_1 + 0x14),0x3c);
  FUN_0810dae0(uVar6,0xf,0x12);
  FUN_0810da2c(uVar5,0x10,0x12);
  iVar4 = FUN_08129050(*(undefined4 *)(param_1 + 0x14),0x3c);
  bVar2 = FUN_08128fb8(iVar4 * 0xa7,100);
  if (bVar2 == 100) {
    bVar2 = 0;
  }
  FUN_0810dae0(bVar2,0x12,0x12);
  if (bVar2 < 10) {
    FUN_0810dae0(0,0x11,0x12);
  }
  return CONCAT44(in_lr,uVar3);
}


