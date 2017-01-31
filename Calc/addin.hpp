/*
 Copyright (C) 2016 Lars Callenbach

 Autogenerated file from python source for QuantLib addin in LibreOffice/Calc.

 This file is part of QuantLib, a free-software/open-source library
 for financial quantitative analysts and developers - http://quantlib.org/

 QuantLib is free software: you can redistribute it and/or modify it
 under the terms of the QuantLib license.  You should have received a
 copy of the license along with this program; if not, please email
 <quantlib-dev@lists.sf.net>. The license is also available online at
 <http://quantlib.org/license.shtml>.

 This program is distributed in the hope that it will be useful, but WITHOUT
 ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 FOR A PARTICULAR PURPOSE.  See the license for more details.
*/
#ifndef __addin_hpp__
#define __addin_hpp__
#include <oh/object.hpp>
#include <oh/repository.hpp>
#include <qlo/all.hpp>
#include <idltypes.hpp>
#include <idlconversions.hpp>
#include <iostream>
#include <ql/processes/blackscholesprocess.hpp>
#include <ql/termstructures/credit/defaultprobabilityhelpers.hpp>
#include <ql/termstructures/yield/zerocurve.hpp>
#include <qlo/interpolation.hpp>
#include <ql/termstructures/credit/interpolatedhazardratecurve.hpp>
#include <ql/termstructures/yield/ratehelpers.hpp>
#include <ql/instruments/payoffs.hpp>
#include <ql/termstructures/credit/piecewisedefaultcurve.hpp>
#include <ql/pricingengines/vanilla/analyticeuropeanengine.hpp>
#include <ql/exercise.hpp>
#include <ql/instruments/bonds/floatingratebond.hpp>
#include <ql/indexes/ibor/euribor.hpp>
#include <qlo/all.hpp>
#include <ql/time/schedule.hpp>
#include <ql/quotes/simplequote.hpp>
#include <ql/termstructures/yield/discountcurve.hpp>
#include <ql/termstructures/volatility/equityfx/blackvariancesurface.hpp>
#include <ql/termstructures/yield/piecewiseyieldcurve.hpp>
#include <ql/instruments/vanillaoption.hpp>
#include <ql/instruments/bonds/fixedratebond.hpp>
#include <ql/instruments/futures.hpp>
#include <ql/termstructures/bootstraphelper.hpp>
#include <ql/time/frequency.hpp>
#include <ql/option.hpp>
#include <ql/time/timeunit.hpp>
#include <ql/time/calendars/target.hpp>
#include <ql/time/calendars/germany.hpp>
#include <ql/time/daycounters/actualactual.hpp>
#include <ql/time/dategenerationrule.hpp>
#include <ql/time/businessdayconvention.hpp>
#include <ql/time/daycounters/actual365fixed.hpp>
#include <ql/time/daycounters/thirty360.hpp>
#include <ql/time/daycounters/actual365nl.hpp>
#include <ql/time/daycounters/simpledaycounter.hpp>
#include <ql/time/daycounters/actual360.hpp>
#include <ql/termstructures/volatility/equityfx/blackvoltermstructure.hpp>
#include <ql/termstructures/defaulttermstructure.hpp>
#include <ql/math/interpolations/interpolation2d.hpp>
#include <ql/quote.hpp>
#include <ql/time/daycounter.hpp>
#include <ql/time/calendar.hpp>
#include <ql/instrument.hpp>
#include <ql/math/interpolation.hpp>
#include <ql/termstructures/yieldtermstructure.hpp>
namespace Addin {
    class QuantLib_GeneralizedBlackScholesProcess : public ObjectHandler::Object {
        std::vector<boost::any> arguments_;
        int method_;
        virtual void update();
        virtual void del();
        public:
        QuantLib_GeneralizedBlackScholesProcess(IDL_any Quote_any, IDL_any DividendTS_any, IDL_any RiskFreeTS_any, IDL_any BlackVolTS_any);
        //inline ~QuantLib_GeneralizedBlackScholesProcess() { 
            //del(); 
        //}
    };
    class QuantLib_UpfrontCdsHelper : public ObjectHandler::Object {
        std::vector<boost::any> arguments_;
        int method_;
        virtual void update();
        virtual void del();
        public:
        QuantLib_UpfrontCdsHelper(IDL_any Upfront_any, IDL_any RunningSpread_any, IDL_any Tenor_any, IDL_any SettlementDays_any, IDL_any Calendar_any, IDL_any Frequency_any, IDL_any PaymentConvention_any, IDL_any Rule_any, IDL_any DayCounter_any, IDL_any RecoveryRate_any, IDL_any DiscountCurve_any, IDL_any UpfrontSettlementDays_any, IDL_any SettlesAccrual_any, IDL_any PaysAtDefaultTime_any);
        //inline ~QuantLib_UpfrontCdsHelper() { 
            //del(); 
        //}
    };
    class QuantLib_ZeroCurve : public ObjectHandler::Object {
        std::vector<boost::any> arguments_;
        int method_;
        virtual void update();
        virtual void del();
        public:
        QuantLib_ZeroCurve(SEQSEQ(IDL_any) Dates_any, SEQSEQ(IDL_any) ZeroRates_any, IDL_any DayCounterDayCounter_any);
        //inline ~QuantLib_ZeroCurve() { 
            //del(); 
        //}
    };
    class Addin_AddinInterpolation2D : public ObjectHandler::Object {
        std::vector<boost::any> arguments_;
        int method_;
        virtual void update();
        virtual void del();
        public:
        Addin_AddinInterpolation2D(IDL_any Interpolator2DID_any, SEQSEQ(IDL_any) XVector_any, SEQSEQ(IDL_any) YVector_any, SEQSEQ(IDL_any) ZData_any);
        //inline ~Addin_AddinInterpolation2D() { 
            //del(); 
        //}
    };
    class QuantLib_InterpolatedHazardRateCurve : public ObjectHandler::Object {
        std::vector<boost::any> arguments_;
        int method_;
        virtual void update();
        virtual void del();
        public:
        QuantLib_InterpolatedHazardRateCurve(IDL_any Interpolator_any, SEQSEQ(IDL_any) Dates_any, SEQSEQ(IDL_any) HazardRates_any, IDL_any DayCounter_any, IDL_any Calendar_any);
        //inline ~QuantLib_InterpolatedHazardRateCurve() { 
            //del(); 
        //}
    };
    class QuantLib_SpreadCdsHelper : public ObjectHandler::Object {
        std::vector<boost::any> arguments_;
        int method_;
        virtual void update();
        virtual void del();
        public:
        QuantLib_SpreadCdsHelper(IDL_any RunningSpread_any, IDL_any Tenor_any, IDL_any SettlementDays_any, IDL_any Calendar_any, IDL_any Frequency_any, IDL_any PaymentConvention_any, IDL_any Rule_any, IDL_any DayCounter_any, IDL_any RecoveryRate_any, IDL_any DiscountCurve_any, IDL_any SettlesAccrual_any, IDL_any PaysAtDefaultTime_any);
        //inline ~QuantLib_SpreadCdsHelper() { 
            //del(); 
        //}
    };
    class QuantLib_PlainVanillaPayoff : public ObjectHandler::Object {
        std::vector<boost::any> arguments_;
        int method_;
        virtual void update();
        virtual void del();
        public:
        QuantLib_PlainVanillaPayoff(IDL_any OptionType_any, IDL_any Strike_any);
        //inline ~QuantLib_PlainVanillaPayoff() { 
            //del(); 
        //}
    };
    class QuantLib_PiecewiseDefaultCurve : public ObjectHandler::Object {
        std::vector<boost::any> arguments_;
        int method_;
        virtual void update();
        virtual void del();
        public:
        QuantLib_PiecewiseDefaultCurve(IDL_any Traits_any, IDL_any Interpolator_any, IDL_any ReferenceDate_any, SEQSEQ(IDL_any) BootstrapInstruments_any, IDL_any DayCounter_any, IDL_any Accuracy_any);
        //inline ~QuantLib_PiecewiseDefaultCurve() { 
            //del(); 
        //}
    };
    class QuantLib_AnalyticEuropeanEngine : public ObjectHandler::Object {
        std::vector<boost::any> arguments_;
        int method_;
        virtual void update();
        virtual void del();
        public:
        QuantLib_AnalyticEuropeanEngine(IDL_any GeneralizedBlackSchlolesProcess_any);
        //inline ~QuantLib_AnalyticEuropeanEngine() { 
            //del(); 
        //}
    };
    class QuantLib_EuropeanExercise : public ObjectHandler::Object {
        std::vector<boost::any> arguments_;
        int method_;
        virtual void update();
        virtual void del();
        public:
        QuantLib_EuropeanExercise(IDL_any ExerciseDate_any);
        //inline ~QuantLib_EuropeanExercise() { 
            //del(); 
        //}
    };
    class QuantLib_FloatingRateBond : public ObjectHandler::Object {
        std::vector<boost::any> arguments_;
        int method_;
        virtual void update();
        virtual void del();
        public:
        QuantLib_FloatingRateBond(IDL_any SettlementDays_any, IDL_any faceAmount_any, IDL_any StartDate_any, IDL_any MaturityDate_any, IDL_any CouponFrequency_any, IDL_any Calendar_any, IDL_any IborIndex_any, IDL_any AccrualDayCounter_any, IDL_any AccrualConvention_any, IDL_any PaymentConvention_any, IDL_any FixingDays_any, SEQSEQ(IDL_any) Gearings_any, SEQSEQ(IDL_any) Spreads_any, SEQSEQ(IDL_any) Caps_any, SEQSEQ(IDL_any) Floors_any, IDL_any InArrears_any, IDL_any Redemption_any, IDL_any IssueDate_any, IDL_any StubDate_any, IDL_any Rule_any, IDL_any EndOfMonth_any);
        //inline ~QuantLib_FloatingRateBond() { 
            //del(); 
        //}
    };
    class QuantLib_Euribor365 : public ObjectHandler::Object {
        std::vector<boost::any> arguments_;
        int method_;
        virtual void update();
        virtual void del();
        public:
        QuantLib_Euribor365(IDL_any Tenor_any, IDL_any ForwardCurve_any);
        //inline ~QuantLib_Euribor365() { 
            //del(); 
        //}
    };
    class QuantLib_SwapRateHelper : public ObjectHandler::Object {
        std::vector<boost::any> arguments_;
        int method_;
        virtual void update();
        virtual void del();
        public:
        QuantLib_SwapRateHelper(IDL_any Rate_any, IDL_any Tenor_any, IDL_any Calendar_any, IDL_any FixedFrequency_any, IDL_any FixedConvention_any, IDL_any FixedDayCounter_any, IDL_any IborIndex_any, IDL_any Spread_any, IDL_any FwdStartPeriod_any);
        //inline ~QuantLib_SwapRateHelper() { 
            //del(); 
        //}
    };
    class QuantLib_DepositRateHelper : public ObjectHandler::Object {
        std::vector<boost::any> arguments_;
        int method_;
        virtual void update();
        virtual void del();
        public:
        QuantLib_DepositRateHelper(IDL_any Rate_any, IDL_any Period_any, IDL_any FixingDays_any, IDL_any Calendar_any, IDL_any BusinessDayConvention_any, IDL_any EndOfMonth_any, IDL_any DayCounter_any);
        //inline ~QuantLib_DepositRateHelper() { 
            //del(); 
        //}
    };
    class QuantLib_Euribor : public ObjectHandler::Object {
        std::vector<boost::any> arguments_;
        int method_;
        virtual void update();
        virtual void del();
        public:
        QuantLib_Euribor(IDL_any Tenor_any, IDL_any ForwardCurve_any);
        //inline ~QuantLib_Euribor() { 
            //del(); 
        //}
    };
    class Addin_AddinInterpolation1D : public ObjectHandler::Object {
        std::vector<boost::any> arguments_;
        int method_;
        virtual void update();
        virtual void del();
        public:
        Addin_AddinInterpolation1D(IDL_any Interpolator1DID_any, SEQSEQ(IDL_any) XVector_any, SEQSEQ(IDL_any) YVector_any);
        //inline ~Addin_AddinInterpolation1D() { 
            //del(); 
        //}
    };
    class QuantLib_Schedule : public ObjectHandler::Object {
        std::vector<boost::any> arguments_;
        int method_;
        virtual void update();
        virtual void del();
        public:
        QuantLib_Schedule(IDL_any EffectiveDate_any, IDL_any TerminationDate_any, IDL_any Period_any, IDL_any Calendar_any, IDL_any Convention_any, IDL_any TerminationConvention_any, IDL_any Rule_any, IDL_any EndOfMonth_any, IDL_any FirstDate_any, IDL_any NextToLastDate_any);
        static std::vector<QuantLib::Date> dates(IDL_any ObjectId_any);
        //inline ~QuantLib_Schedule() { 
            //del(); 
        //}
    };
    class QuantLib_FuturesRateHelper : public ObjectHandler::Object {
        std::vector<boost::any> arguments_;
        int method_;
        virtual void update();
        virtual void del();
        public:
        QuantLib_FuturesRateHelper(IDL_any Price_any, IDL_any IborStartDate_any, IDL_any IborIndex_any, IDL_any ConvexityAdjustment_any, IDL_any Type_any);
        //inline ~QuantLib_FuturesRateHelper() { 
            //del(); 
        //}
    };
    class QuantLib_SimpleQuote : public ObjectHandler::Object {
        std::vector<boost::any> arguments_;
        int method_;
        virtual void update();
        virtual void del();
        public:
        QuantLib_SimpleQuote(IDL_any Value_any);
        //inline ~QuantLib_SimpleQuote() { 
            //del(); 
        //}
    };
    class QuantLib_FraRateHelper : public ObjectHandler::Object {
        std::vector<boost::any> arguments_;
        int method_;
        virtual void update();
        virtual void del();
        public:
        QuantLib_FraRateHelper(IDL_any Rate_any, IDL_any MonthsToStart_any, IDL_any MonthsToEnd_any, IDL_any FixingDays_any, IDL_any Calendar_any, IDL_any Convention_any, IDL_any EndOfMonth_any, IDL_any DayCounter_any, IDL_any Pillar_any, IDL_any CustomPillarDate_any);
        //inline ~QuantLib_FraRateHelper() { 
            //del(); 
        //}
    };
    class QuantLib_DiscountCurve : public ObjectHandler::Object {
        std::vector<boost::any> arguments_;
        int method_;
        virtual void update();
        virtual void del();
        public:
        QuantLib_DiscountCurve(SEQSEQ(IDL_any) Dates_any, SEQSEQ(IDL_any) Discounts_any, IDL_any DayCounter_any);
        //inline ~QuantLib_DiscountCurve() { 
            //del(); 
        //}
    };
    class QuantLib_BlackVarianceSurface : public ObjectHandler::Object {
        std::vector<boost::any> arguments_;
        int method_;
        virtual void update();
        virtual void del();
        public:
        QuantLib_BlackVarianceSurface(IDL_any ReferenceDate_any, IDL_any Calendar_any, SEQSEQ(IDL_any) Dates_any, SEQSEQ(IDL_any) Strikes_any, SEQSEQ(IDL_any) BlackVolMatrix_any, IDL_any DayCounter_any, IDL_any LowerExtrapolation_any, IDL_any UpperExtrapolation_any);
        //inline ~QuantLib_BlackVarianceSurface() { 
            //del(); 
        //}
    };
    class QuantLib_PiecewiseYieldCurve : public ObjectHandler::Object {
        std::vector<boost::any> arguments_;
        int method_;
        virtual void update();
        virtual void del();
        public:
        QuantLib_PiecewiseYieldCurve(IDL_any Traits_any, IDL_any Interpolator_any, IDL_any ReferenceDate_any, SEQSEQ(IDL_any) BootstrapInstruments_any, IDL_any DayCounter_any, IDL_any Accuracy_any);
        //inline ~QuantLib_PiecewiseYieldCurve() { 
            //del(); 
        //}
    };
    class QuantLib_VanillaOption : public ObjectHandler::Object {
        std::vector<boost::any> arguments_;
        int method_;
        virtual void update();
        virtual void del();
        public:
        QuantLib_VanillaOption(IDL_any StrikedTypePayoff_any, IDL_any Exercise_any);
        //inline ~QuantLib_VanillaOption() { 
            //del(); 
        //}
    };
    class QuantLib_FixedRateBond : public ObjectHandler::Object {
        std::vector<boost::any> arguments_;
        int method_;
        virtual void update();
        virtual void del();
        public:
        QuantLib_FixedRateBond(IDL_any SettlementDays_any, IDL_any CouponCalendar_any, IDL_any FaceAmount_any, IDL_any StartDate_any, IDL_any MaturityDate_any, IDL_any Tenor_any, SEQSEQ(IDL_any) Coupons_any, IDL_any AccrualDayCounter_any, IDL_any AccrualConvention_any, IDL_any PaymentConvention_any, IDL_any Redemption_any, IDL_any IssueDate_any, IDL_any StubDate_any, IDL_any Rule_any, IDL_any EndOfMonth_any, IDL_any PaymentCalendar_any, IDL_any ExCouponPeriod_any, IDL_any ExCouponCalendar_any, IDL_any ExCouponConvention_any, IDL_any ExCouponEndOfMonth_any);
        //inline ~QuantLib_FixedRateBond() { 
            //del(); 
        //}
    };
    class QuantLib_BlackVolTermStructure {
        public:
        QuantLib_BlackVolTermStructure() {};
        static QuantLib::Volatility blackVol(IDL_any ObjectId_any, IDL_any Maturity_any, IDL_any Strike_any, IDL_any Extrapolate_any);
    };
    class QuantLib_DefaultProbabilityTermStructure {
        public:
        QuantLib_DefaultProbabilityTermStructure() {};
        static QuantLib::Probability hazardRate(IDL_any ObjectId_any, IDL_any Date_any, IDL_any Extrapolate_any);
        static QuantLib::Probability survivalProbability(IDL_any ObjectId_any, IDL_any Date_any, IDL_any Extrapolate_any);
        static QuantLib::Probability defaultProbability(IDL_any ObjectId_any, IDL_any Date_any, IDL_any Extrapolate_any);
        static QuantLib::Probability defaultDensity(IDL_any ObjectId_any, IDL_any Date_any, IDL_any Extrapolate_any);
    };
    class QuantLib_Interpolation2D {
        public:
        QuantLib_Interpolation2D() {};
        static QuantLib::Real addinOperator(IDL_any ObjectId_any, IDL_any X_any, IDL_any Y_any, IDL_any Extrapolate_any);
    };
    class QuantLib_Quote {
        public:
        QuantLib_Quote() {};
        static QuantLib::Real value(IDL_any ObjectId_any);
    };
    class QuantLib_DayCounter {
        public:
        QuantLib_DayCounter() {};
        static double yearFraction(IDL_any ObjectId_any, IDL_any StartDate_any, IDL_any EndDate_any);
        static QuantLib::BigInteger dayCount(IDL_any ObjectId_any, IDL_any StartDate_any, IDL_any EndDate_any);
        static std::string name(IDL_any ObjectId_any);
    };
    class QuantLib_Calendar {
        public:
        QuantLib_Calendar() {};
        static QuantLib::Date advance(IDL_any ObjectId_any, IDL_any StartDate_any, IDL_any Period_any, IDL_any BusinessDayConvention_any, IDL_any EndOfMonth_any);
        static std::string name(IDL_any ObjectId_any);
        static bool isHoliday(IDL_any ObjectId_any, IDL_any Date_any);
        static bool isBusinessDay(IDL_any ObjectId_any, IDL_any Date_any);
    };
    class QuantLib_Instrument {
        public:
        QuantLib_Instrument() {};
        static void setPricingEngine(IDL_any ObjectId_any, IDL_any PricingEngine_any);
        static QuantLib::Real NPV(IDL_any ObjectId_any);
        static bool isExpired(IDL_any ObjectId_any);
    };
    class QuantLib_Interpolation {
        public:
        QuantLib_Interpolation() {};
        static QuantLib::Real addinOperator(IDL_any ObjectId_any, IDL_any X_any, IDL_any Extrapolate_any);
    };
    class QuantLib_YieldTermStructure {
        public:
        QuantLib_YieldTermStructure() {};
        static QuantLib::DiscountFactor discount(IDL_any ObjectId_any, IDL_any Date_any);
    };
    void Addin_AddinSettings_setEvaluationDate(IDL_any Date_any);
    void QuantLib_Futures_TypeEnum(IDL_string fromtyp, QuantLib::Futures::Type &totyp);
    void QuantLib_Futures_TypeBack(QuantLib::Futures::Type fromtyp, std::string &totyp);
    void QuantLib_Pillar_ChoiceEnum(IDL_string fromtyp, QuantLib::Pillar::Choice &totyp);
    void QuantLib_Pillar_ChoiceBack(QuantLib::Pillar::Choice fromtyp, std::string &totyp);
    void QuantLib_FrequencyEnum(IDL_string fromtyp, QuantLib::Frequency &totyp);
    void QuantLib_FrequencyBack(QuantLib::Frequency fromtyp, std::string &totyp);
    void QuantLib_Option_TypeEnum(IDL_string fromtyp, QuantLib::Option::Type &totyp);
    void QuantLib_TimeUnitEnum(IDL_string fromtyp, QuantLib::TimeUnit &totyp);
    void QuantLib_TimeUnitBack(QuantLib::TimeUnit fromtyp, std::string &totyp);
    void QuantLib_CalendarEnum(IDL_string fromtyp, QuantLib::Calendar &totyp);
    void QuantLib_CalendarBack(QuantLib::Calendar fromtyp, std::string &totyp);
    void QuantLib_DayCounterEnum(IDL_string fromtyp, QuantLib::DayCounter &totyp);
    void QuantLib_DayCounterBack(QuantLib::DayCounter fromtyp, std::string &totyp);
    void QuantLib_DateGeneration_RuleEnum(IDL_string fromtyp, QuantLib::DateGeneration::Rule &totyp);
    void QuantLib_BusinessDayConventionEnum(IDL_string fromtyp, QuantLib::BusinessDayConvention &totyp);
    void QuantLib_BusinessDayConventionBack(QuantLib::BusinessDayConvention fromtyp, std::string &totyp);
    void QuantLib_BlackVarianceSurface_ExtrapolationEnum(IDL_string fromtyp, QuantLib::BlackVarianceSurface::Extrapolation &totyp);
};
#endif
