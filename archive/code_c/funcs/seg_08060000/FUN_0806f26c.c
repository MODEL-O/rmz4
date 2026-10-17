// undefined FUN_0806f26c(void)
// entry 0x806f26c


/* WARNING: Removing unreachable block (ram,0x0806f2da) */

undefined4 FUN_0806f26c(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  undefined4 local_34 [4];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  local_34[0] = *DAT_0806f2a8;
  local_34[1] = DAT_0806f2a8[1];
  local_34[2] = DAT_0806f2a8[2];
  local_34[3] = DAT_0806f2a8[3];
  uStack_24 = DAT_0806f2a8[4];
  uStack_20 = DAT_0806f2a8[5];
  local_1c = DAT_0806f2a8[6];
  uStack_18 = DAT_0806f2a8[7];
  bVar1 = *(byte *)(param_1 + 0xc4);
  if ((*(ushort *)(DAT_0806f2ac + 8) & 8) == 0) {
    uVar2 = FUN_0810d398(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),
                         *(undefined4 *)(*DAT_0806f2fc + 0x54),
                         *(int *)(*DAT_0806f2fc + 0x58) + DAT_0806f300);
    bVar1 = FUN_0810d3c4(uVar2,bVar1,8);
    FUN_0801cf00(param_1,*(undefined2 *)(local_34 + ((int)(bVar1 + 0x10) >> 5 & 7)));
    FUN_0801cff0(param_1);
    *(byte *)(param_1 + 0xc4) = bVar1;
  }
  else {
    FUN_0801cf00(param_1,0xad00);
    FUN_0801cff0(param_1);
  }
  return in_lr;
}


