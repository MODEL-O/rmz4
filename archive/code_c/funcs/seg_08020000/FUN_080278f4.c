// undefined FUN_080278f4(void)
// entry 0x80278f4


undefined4 FUN_080278f4(int param_1)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar5 = DAT_08027958;
  iVar4 = DAT_08027948;
  puVar3 = DAT_08027920;
  iVar2 = DAT_0802791c;
  iVar6 = *(int *)(param_1 + 0x10);
  uVar1 = *(ushort *)(param_1 + 0x148);
  if (uVar1 == 0) {
    uVar1 = (ushort)DAT_08027924;
    *(ushort *)(DAT_0802791c + 4) = uVar1 & *DAT_08027920;
    *(ushort *)(iVar2 + 6) = uVar1 & puVar3[0xc];
  }
  else if (uVar1 == DAT_08027944) {
    *(undefined2 *)(DAT_08027948 + 4) = 0;
    *(undefined2 *)(iVar4 + 6) = 0;
    if (iVar6 != 0) {
      FUN_0802b7a4(iVar6);
    }
  }
  else {
    *(ushort *)(DAT_08027958 + 4) = uVar1;
    *(ushort *)(iVar5 + 6) = uVar1;
  }
  return in_lr;
}


